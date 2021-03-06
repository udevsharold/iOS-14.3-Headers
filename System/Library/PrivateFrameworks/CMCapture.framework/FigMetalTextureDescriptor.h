/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MTLTextureDescriptor;

@interface FigMetalTextureDescriptor : NSObject {

	BOOL _isLinear;
	NSString* _label;
	MTLTextureDescriptor* _desc;

}

@property (assign,nonatomic) BOOL isLinear;                            //@synthesize isLinear=_isLinear - In the implementation block
@property (nonatomic,retain) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) MTLTextureDescriptor * desc;              //@synthesize desc=_desc - In the implementation block
-(id)init;
-(void)setDesc:(MTLTextureDescriptor *)arg1 ;
-(BOOL)isLinear;
-(void)setIsLinear:(BOOL)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(MTLTextureDescriptor *)desc;
-(NSString *)label;
@end

