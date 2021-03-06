/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject {

	CIBurstImageSetInternal* _priv;

}
+(id)defaultVersionString;
+(id)burstImageSet;
+(id)burstImageSetWithOptions:(id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)isPortrait;
-(id)init;
-(void)dealloc;
-(id)burstId;
-(BOOL)isAction;
-(void)addImageFromIOSurface:(IOSurfaceRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(double)secondsSinceStart;
-(id)bestImageIdentifiers;
-(id)allImageIdentifiers;
-(id)statsForImageWithIdentifier:(id)arg1 ;
-(id)imageClusterForIdentifier:(id)arg1 ;
-(id)coverImageIdentifier;
-(unsigned long long)imageClusterCount;
-(id)imageClusterForIndex:(unsigned long long)arg1 ;
-(void)setLoggingListener:(void*)arg1 withUserInfo:(void*)arg2 ;
@end

