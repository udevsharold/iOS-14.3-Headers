/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DNDModeAssertionService, DNDStateService, NSString;

@interface DNDToggleManager : NSObject {

	DNDModeAssertionService* _modeAssertionService;
	DNDStateService* _stateService;
	NSString* _toggleAssertionIdentifier;

}

@property (nonatomic,copy) NSString * toggleAssertionIdentifier;              //@synthesize toggleAssertionIdentifier=_toggleAssertionIdentifier - In the implementation block
+(void)initialize;
+(id)managerForClientIdentifier:(id)arg1 ;
-(void)setToggleAssertionIdentifier:(NSString *)arg1 ;
-(id)initWithModeAssertionService:(id)arg1 stateService:(id)arg2 ;
-(BOOL)_toggleDNDOnReturningError:(id*)arg1 ;
-(BOOL)_toggleDNDOffReturningError:(id*)arg1 ;
-(NSString *)toggleAssertionIdentifier;
-(BOOL)toggleToTargetState:(unsigned long long)arg1 error:(id*)arg2 ;
@end

