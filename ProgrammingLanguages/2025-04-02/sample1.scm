(define my-add
  (lambda (x y)
    (+ x y)))

;;; Shorthand that Dave believes interferes
;;; with your learning, so avoid it, because
;;; Dave knows best:
(define (my-other-add x y)
  (+ x y))

;;; Write some recursive code
;;; Write recursive factorial
;;; 5! = 5 * 4 * 3 * 2 * 1
;;; two cases:
;;; base case, easy simple no work one
;;; recursive case, which refers backwards
(define fact
  (lambda (n)
    (if (equal? n 1)
	1
	(* n (fact (- n 1))))
    )
  )
)
    
