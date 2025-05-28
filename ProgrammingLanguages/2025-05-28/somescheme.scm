;; Where we're headed: let with a recursive
;; call for a function created inside the let

(let ((a 3) (b 5))
  (+ a b))

;; (let ((a 3) (b (+ a 1)))
;;   (+ a b))

;; Two ways of fixing
(let ((a 3))
  (let ((b (+ a 1)))
    (+ a b)))

;; or, same thing, just shorthand
;; let* means do the above nested lets
(let* ((a 3) (b (+ a 1)))
  (+ a b))

;; Nested functions
;; A common idiom in Scheme is to use let
;; to make a "private" function, like a
;; function you never intend to use anywhere
;; else

(let ((add-one (lambda (x)
                 (+ x 1))))
  (add-one 5))

;; Try the above with a recursive function
(let ((fact (lambda (n)
              (if (equal? n 1)
                  1
                  (* n (fact (- n 1)))))))

  (fact 3))
