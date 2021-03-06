/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AutomaticAssessmentConfiguration.framework/Frameworks/AACDependencies.framework/AACDependencies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AACDependencies.AEDBackingAssessmentSession : NSObject {

	 configuration;
	 policyBundleFactory;
	 configurationValidator;
	 policySession;
	 state;
	 delegate;

}

@property (assign,__weak,nonatomic) id<_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_> delegate; 
@property (readonly,nonatomic) BOOL isActive; 
-(void)begin;
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)isActive;
-(void)end;
-(void)setDelegate:(id<_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_>)arg1 ;
-(id<_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_>)delegate;
@end

