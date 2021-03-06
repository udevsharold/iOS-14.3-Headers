/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@interface _CNOnEmptyObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNObservable> _nextObservable;
	BOOL _observableIsEmpty;

}

@property (nonatomic,retain) id<CNObservable> observable;              //@synthesize observable=_observable - In the implementation block
-(id<CNObservable>)observable;
-(id)subscribe:(id)arg1 ;
-(BOOL)isObservableEmpty;
-(id)subscribeNextObservable:(id)arg1 ;
-(void)observableDidSendResult;
-(void)setObservable:(id<CNObservable>)arg1 ;
-(id)initWithObservable:(id)arg1 nextObservable:(id)arg2 ;
@end

