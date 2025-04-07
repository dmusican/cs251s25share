;;; regular non-curried function
;; (define mult
;;   (lambda (a b)
;;     (* a b)))

;; redoit in a curried fashion
(define mult
  (lambda (a)

    ;; return another function of one parameter
    ;; that will multiply the two numbers
    (lambda (b)
      (* a b))

   )
)

;; redoit again, without blank space and comments
(define mult
  (lambda (a)
    (lambda (b)
      (* a b))

   )
)

(define add-one
  (lambda (x)
    (+ x 1)))

(map add-one '(9 2 3 5 4))

;;; Alternatively
(map (lambda (x) (+ x 1)) '(9 2 3 5 4))

(map (lambda (lst) (car lst)) '((a b c) (d e) (f g h)))


;;; Add up lengths of sublists
(define lists '((the fox jumped) (the cow mooed)
		(birds) (happy cheetahs)))

(define total-length
  (lambda (documents)
    (fold-left + 0 (map length documents))))








