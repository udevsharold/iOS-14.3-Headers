/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:30:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NTKFaceViewClassPrewarmCache : NSObject {

	NSMutableDictionary* _prewarmCache;

}
+(id)sharedInstance;
-(id)init;
-(id)prewarmDataForClass:(Class)arg1 ;
-(void)prewarmClasses:(id)arg1 ;
@end
