;;; select nth item in a list
;; (define nth
;;   (lambda (lst n)
;;     (cond ( (null? lst)   #f  )
;; 	  ( (equal? n 0)  (car lst)    )
;; 	  ( else     (nth (cdr lst) (- n 1))))))

(define nth
  (lambda (lst n)
    (cond ((null? lst) #f)
	  ((equal? n 0) (car lst))
	  (else (nth (cdr lst) (- n 1))))))
