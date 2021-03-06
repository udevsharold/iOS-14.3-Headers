/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXFBFakeProcessState, NSString;

@interface AXFBFakeProcess : NSObject {

	AXFBFakeProcessState* _state;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) AXFBFakeProcessState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(AXFBFakeProcessState *)state;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setState:(AXFBFakeProcessState *)arg1 ;
@end

