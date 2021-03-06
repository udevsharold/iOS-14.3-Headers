/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@class NSMutableDictionary, NSString, NSArray;

@interface ISImageBag : NSObject <ISScalableCompositorResource> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _imagesByScale;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSMutableDictionary * imagesByScale;              //@synthesize imagesByScale=_imagesByScale - In the implementation block
@property (assign) os_unfair_lock_s lock;                            //@synthesize lock=_lock - In the implementation block
@property (copy,readonly) NSArray * images; 
+(id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 ;
+(id)imageBagWithResourcesNames:(id)arg1 fromBundle:(id)arg2 ;
+(id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 subdirectory:(id)arg3 ;
+(id)imageBagWithResourcesNamed:(id)arg1 directory:(id)arg2 ;
-(id)init;
-(void)insertImage:(id)arg1 ;
-(id)initWithImages:(id)arg1 ;
-(NSArray *)images;
-(NSMutableDictionary *)imagesByScale;
-(void)setImagesByScale:(NSMutableDictionary *)arg1 ;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(NSString *)debugDescription;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)imagesForScale:(double)arg1 ;
-(os_unfair_lock_s)lock;
@end

