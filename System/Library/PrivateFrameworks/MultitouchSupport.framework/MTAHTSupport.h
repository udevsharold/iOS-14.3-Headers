/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MultitouchSupport.framework/MultitouchSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle;

@interface MTAHTSupport : NSObject {

	NSBundle* _bundle;
	Class _AHTDevice;

}

@property (retain) NSBundle * bundle;                      //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) Class AHTDevice;              //@synthesize AHTDevice=_AHTDevice - In the implementation block
+(id)allDevices;
+(id)sharedInstance;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSBundle *)bundle;
-(id)init;
-(Class)AHTDevice;
-(void)setAHTDevice:(Class)arg1 ;
@end

