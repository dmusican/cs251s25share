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
