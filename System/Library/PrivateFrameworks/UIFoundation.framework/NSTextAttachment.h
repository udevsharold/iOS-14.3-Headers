/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIKit/UIAccessibilityContentSizeCategoryImageAdjusting.h>
#import <libobjc.A.dylib/NSTextAttachmentContainer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSFileWrapper, UIImage, NSTextAttachmentView, UIView;

@interface NSTextAttachment : NSObject <UIAccessibilityContentSizeCategoryImageAdjusting, NSTextAttachmentContainer, NSSecureCoding> {

	NSData* _data;
	NSString* _uti;
	NSString* _cacheKey;
	CGRect _bounds;
	double _layoutPadding;
	struct {
		unsigned _allowsTextAttachmentView : 1;
		unsigned _embeddingType : 4;
		unsigned _standaloneAlignment : 3;
		unsigned _allocatesTextContainer : 1;
	}  _taFlags;
	NSFileWrapper* _fileWrapper;
	UIImage* _image;
	NSTextAttachmentView* _wrapperView;

}

@property (assign,nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * accessibilityLabel; 
@property (retain) UIView * contentView; 
@property (nonatomic,copy) NSData * contents; 
@property (nonatomic,copy) NSString * fileType; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGRect bounds; 
@property (nonatomic,retain) NSFileWrapper * fileWrapper; 
+(BOOL)_attachmentHasImage:(id)arg1 ;
+(id)_imageFromAttachment:(id)arg1 ;
+(id)textAttachmentWithImage:(id)arg1 ;
+(void)initialize;
+(id)imageCache;
+(BOOL)supportsSecureCoding;
+(Class)textAttachmentViewProviderClassForFileType:(id)arg1 ;
+(void)registerTextAttachmentViewProviderClass:(Class)arg1 forFileType:(id)arg2 ;
+(Class)textAttachmentClassForFileType:(id)arg1 ;
+(void)registerTextAttachmentClass:(Class)arg1 forFileType:(id)arg2 ;
-(void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsImageSizeForAccessibilityContentSizeCategory;
-(id)_image;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(long long)standaloneAlignment;
-(BOOL)_allocatesTextContainer;
-(void)placeView:(id)arg1 withFrame:(CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(id)init;
-(id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3 ;
-(UIImage *)image;
-(id)_imageForUTI_iOS:(id)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(void)_drawInAlignedRect:(CGRect)arg1 attributes:(id)arg2 location:(id)arg3 textContainer:(id)arg4 applicationFrameworkContext:(long long)arg5 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setStandaloneAlignment:(long long)arg1 ;
-(void)setFileWrapper:(NSFileWrapper *)arg1 ;
-(void)setAllowsTextAttachmentView:(BOOL)arg1 ;
-(void)_setAllocatesTextContainer:(BOOL)arg1 ;
-(void)_invalidateWrapperView;
-(BOOL)allowsTextAttachmentView;
-(id)initWithFileWrapper:(id)arg1 ;
-(void)setLineLayoutPadding:(double)arg1 ;
-(Class)textAttachmentViewProviderClass;
-(void)setDrawingBounds:(CGRect)arg1 ;
-(CGRect)drawingBounds;
-(id)viewProviderForParentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3 ;
-(void)placeView:(id)arg1 withFrame:(CGRect)arg2 inParentView:(id)arg3 location:(id)arg4 textContainer:(id)arg5 applicationFrameworkContext:(long long)arg6 ;
-(void)setContents:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)contents;
-(long long)embeddingType;
-(void)setEmbeddingType:(long long)arg1 ;
-(id)initWithData:(id)arg1 ofType:(id)arg2 ;
-(id)attachmentCell;
-(NSString *)description;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)accessibilityLabel;
-(id)_cacheKey;
-(NSString *)fileType;
-(void)detachView:(id)arg1 fromParentView:(id)arg2 ;
-(BOOL)usesTextAttachmentView;
-(UIView *)contentView;
-(NSFileWrapper *)fileWrapper;
-(double)lineLayoutPadding;
-(void)setContentView:(UIView *)arg1 ;
-(void)setFileType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)imageForBounds:(CGRect)arg1 attributes:(id)arg2 location:(id)arg3 textContainer:(id)arg4 ;
-(CGRect)attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 position:(CGPoint)arg5 ;
@end

