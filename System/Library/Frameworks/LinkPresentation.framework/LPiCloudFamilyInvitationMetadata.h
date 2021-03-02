/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>

@class NSString, LPImage;

@interface LPiCloudFamilyInvitationMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _action;
	NSString* _kind;
	LPImage* _image;
	LPImage* _icon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * action;                       //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * kind;                         //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) LPImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImage * icon;                        //@synthesize icon=_icon - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)subtitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPImage *)image;
-(LPImage *)icon;
-(void)setImage:(LPImage *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIcon:(LPImage *)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)action;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(NSString *)kind;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
@end
