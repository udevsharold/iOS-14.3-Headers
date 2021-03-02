/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIAssertionControllerSubject;
@class NSMutableDictionary;

@interface _UIAssertionController : NSObject {

	NSMutableDictionary* _activeAssertionRecords;
	id<_UIAssertionControllerSubject> _subject;

}

@property (nonatomic,__weak,readonly) id<_UIAssertionControllerSubject> subject;              //@synthesize subject=_subject - In the implementation block
-(id<_UIAssertionControllerSubject>)subject;
-(id)initWithAssertionSubject:(id)arg1 ;
-(id)vendAssertionOfType:(unsigned long long)arg1 initialState:(BOOL)arg2 reason:(id)arg3 ;
-(void)_enforceSubjectAwarenessOfAssertionState:(BOOL)arg1 forAssertionType:(unsigned long long)arg2 ;
-(id)vendAssertionOfType:(unsigned long long)arg1 initialState:(BOOL)arg2 ;
-(void)_endTrackingAssertion:(id)arg1 ;
-(id)debugDescription;
-(void)_beginTrackingAssertion:(id)arg1 ;
@end
