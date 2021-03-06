/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFButton.h>
@class SFImage, NSDictionary, NSData;


@protocol SFButton <NSObject>
@property (nonatomic,retain) SFImage * image; 
@property (nonatomic,retain) SFImage * selectedImage; 
@property (assign,nonatomic) BOOL isSelected; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setIsSelected:(BOOL)arg1;
-(NSData *)jsonData;
-(BOOL)isSelected;
-(SFImage *)image;
-(void)setImage:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(void)setSelectedImage:(id)arg1;
-(SFImage *)selectedImage;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFImage, NSDictionary, NSData, NSString;

@interface SFButton : NSObject <SFButton, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	BOOL _isSelected;
	SFImage* _image;
	SFImage* _selectedImage;

}

@property (nonatomic,retain) SFImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) SFImage * selectedImage;                                //@synthesize selectedImage=_selectedImage - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                                        //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setIsSelected:(BOOL)arg1 ;
-(NSData *)jsonData;
-(BOOL)isSelected;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SFImage *)image;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setImage:(SFImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasIsSelected;
-(NSDictionary *)dictionaryRepresentation;
-(void)setSelectedImage:(SFImage *)arg1 ;
-(SFImage *)selectedImage;
-(void)encodeWithCoder:(id)arg1 ;
@end

