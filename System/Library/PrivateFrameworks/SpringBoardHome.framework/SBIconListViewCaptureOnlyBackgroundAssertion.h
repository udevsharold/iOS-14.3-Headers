/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBIcon, NSString;

@interface SBIconListViewCaptureOnlyBackgroundAssertion : NSObject <BSInvalidatable> {

	/*^block*/id _invalidationBlock;
	SBIcon* _icon;
	NSString* _groupName;

}

@property (nonatomic,__weak,readonly) SBIcon * icon;                   //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupName;              //@synthesize groupName=_groupName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)groupName;
-(SBIcon *)icon;
-(id)initWithIcon:(id)arg1 groupName:(id)arg2 invalidation:(/*^block*/id)arg3 ;
-(void)invalidate;
@end

