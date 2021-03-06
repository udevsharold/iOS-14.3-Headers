/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, PKStrokeSelectionImageConfig;

@interface PKStrokeSelectionImage : NSObject <NSCopying> {

	UIImage* _image;
	PKStrokeSelectionImageConfig* _config;
	PKStrokeSelectionImageConfig* _fullSizeConfig;

}

@property (nonatomic,copy) UIImage * image;                                                //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) PKStrokeSelectionImageConfig * config;                      //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) PKStrokeSelectionImageConfig * fullSizeConfig;              //@synthesize fullSizeConfig=_fullSizeConfig - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(PKStrokeSelectionImageConfig *)config;
-(PKStrokeSelectionImageConfig *)fullSizeConfig;
-(id)initWithImage:(id)arg1 config:(id)arg2 fullSizeConfig:(id)arg3 ;
@end

