/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSDictionary;

@interface SCNMaterialAttachment : NSObject {

	unsigned glID;
	unsigned target;
	void* context;
	CGSize size;
	NSDictionary* options;

}

@property (assign,nonatomic) unsigned glID; 
@property (assign,nonatomic) unsigned target; 
@property (assign,nonatomic) void* context; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSDictionary * options; 
+(id)materialAttachmentWithGLKTextureInfo:(id)arg1 ;
-(unsigned)glID;
-(void)dealloc;
-(unsigned)target;
-(void)setSize:(CGSize)arg1 ;
-(CGSize)size;
-(void)setContext:(void*)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setTarget:(unsigned)arg1 ;
-(void*)context;
-(NSDictionary *)options;
-(void)setGlID:(unsigned)arg1 ;
@end

