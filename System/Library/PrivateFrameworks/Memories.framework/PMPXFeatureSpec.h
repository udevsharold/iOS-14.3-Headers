/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class NSString;

@interface PMPXFeatureSpec : PXFeatureSpec {

	NSString* _fontName;
	CGSize _size;

}

@property (nonatomic,retain) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) CGSize size;                      //@synthesize size=_size - In the implementation block
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)fontName;
-(void)setSize:(CGSize)arg1 ;
-(CGSize)size;
-(id)viewSpecWithDescriptor:(PXViewSpecDescriptor)arg1 ;
-(id)specForFont:(id)arg1 size:(CGSize)arg2 ;
-(id)verticalExportSpecForFont:(id)arg1 size:(CGSize)arg2 ;
@end
