/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject {

	LSBundleProxy* _bundleProxy;

}

@property (nonatomic,retain) LSBundleProxy * bundleProxy;              //@synthesize bundleProxy=_bundleProxy - In the implementation block
+(id)activityBundleHelperForExtension:(id)arg1 ;
-(id)init;
-(LSBundleProxy *)bundleProxy;
-(id)initWithBundleProxy:(id)arg1 ;
-(void)setBundleProxy:(LSBundleProxy *)arg1 ;
-(id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2 ;
-(id)debugDescription;
@end

