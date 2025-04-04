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

;; (define nth
;;   (lambda (lst n)
;;     (cond ((null? lst)
;; 	   #f)

;; 	  ((equal? n 0)
;; 	   (car lst))

;; 	  (else
;; 	   (nth (cdr lst) (- n 1))))))

;; you can use square brackets instead of
;; parens if you like (so long as they match)
;; (define nth
;;   (lambda (lst n)
;;     (cond [(null? lst) #f]
;; 	  [(equal? n 0) (car lst)]
;; 	  [else (nth (cdr lst) (- n 1))])))

;;; All above examples return just a single answer.
;;; Look at code that assembles lists and returns
;;; those.

;;; (remove-first 'a '(a b c a d))
;;;    --->  '(b c a d)
;;; (remove-first 'b '(a b c a b d))
;;;    --->  '(a c a b d) 
;;; "remove" is sort of confusing: we are
;;; returning a NEW LIST
(define remove-first
  (lambda (symbol lst)
    (cond ((null? lst)
	   '())

	  ((equal? symbol (car lst))
	   (cdr lst))

	  (else
	   (cons
	    (car lst)   ;; single item
	    (remove-first symbol (cdr lst)))))))  ;; lst
	  
    


;;; (remove-all 'a '(a b c a d))
;;;    --->  '(b c d)
;;; (remove-all 'b '(a b c a b d))
;;;    --->  '(a c a d) 
(define remove-all
  (lambda (symbol lst)
    (cond ((null? lst)
	   '())

	  ((equal? symbol (car lst))
	   (remove-all symbol (cdr lst)))
	   

	  (else
	   (cons
	    (car lst)   ;; single item
	    (remove-all symbol (cdr lst)))))))  ;; lst
;; (define subst
;;   (lambda (old new input)
;;     (cond ((null? input) _________________)
;; 	  ((list? input) _________________)
;; 	  ((equal? input old) ______________)
;; 	  (else ________________________))))

;;; Substitute one symbol for another
;;; (subst 'b 'a '(x y b z b z))
;;;     ----> (x y a z a z)
;;; (subst 'b 'a '((b c) ((b) () d) b))
;;;     ----> ((a c) ((a) () d) a)
;;; (subst 'b 'a 'b)
;;;     ----> 'a
(define subst
  (lambda (old new input)
    (cond ((null? input) '())

	  ((list? input)

	   (cons
	    (subst old new (car input))
	    (subst old new (cdr input))
	    ))
	   

	  ((equal? input old) new)

	  (else input))))


	  
    


