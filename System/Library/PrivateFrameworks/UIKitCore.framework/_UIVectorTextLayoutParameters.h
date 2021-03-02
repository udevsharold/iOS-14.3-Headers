/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVectorTextLayoutParameters.h>
@class NSAttributedString, UITraitCollection;


@protocol _UIVectorTextLayoutParameters <NSObject>
@property (nonatomic,copy,readonly) NSAttributedString * attributedText; 
@property (nonatomic,readonly) unsigned long long numberOfLines; 
@property (nonatomic,readonly) CGSize withinSize; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) long long lineBreakMode; 
@required
-(long long)lineBreakMode;
-(NSAttributedString *)attributedText;
-(unsigned long long)numberOfLines;
-(UITraitCollection *)traitCollection;
-(CGSize)withinSize;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, UITraitCollection, NSString;

@interface _UIVectorTextLayoutParameters : NSObject <_UIVectorTextLayoutParameters, NSCopying> {

	NSAttributedString* _attributedText;
	unsigned long long _numberOfLines;
	UITraitCollection* _traitCollection;
	long long _lineBreakMode;
	CGSize _withinSize;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines;                 //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) CGSize withinSize;                                //@synthesize withinSize=_withinSize - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) long long lineBreakMode;                          //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parametersSuitableForView:(id)arg1 ;
-(long long)lineBreakMode;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)numberOfLines;
-(id)initWithParameters:(id)arg1 ;
-(UITraitCollection *)traitCollection;
-(CGSize)withinSize;
-(void)setWithinSize:(CGSize)arg1 ;
-(BOOL)isEqualToParameters:(id)arg1 ;
-(void)_copyFromParameters:(id)arg1 ;
@end
