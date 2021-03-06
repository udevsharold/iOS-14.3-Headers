/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SLMicroBlogStatus : NSObject <NSSecureCoding> {

	NSString* _statusText;
	NSArray* _imageData;
	NSArray* _imageAssetURLs;
	NSString* _maskedApplicationID;
	NSString* _inReplyToStatusID;

}

@property (nonatomic,retain) NSString * statusText;                       //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,retain) NSArray * imageData;                         //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSArray * imageAssetURLs;                    //@synthesize imageAssetURLs=_imageAssetURLs - In the implementation block
@property (nonatomic,retain) NSString * maskedApplicationID;              //@synthesize maskedApplicationID=_maskedApplicationID - In the implementation block
@property (nonatomic,retain) NSString * inReplyToStatusID;                //@synthesize inReplyToStatusID=_inReplyToStatusID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)statusText;
-(NSArray *)imageData;
-(void)setStatusText:(NSString *)arg1 ;
-(NSArray *)imageAssetURLs;
-(id)initWithCoder:(id)arg1 ;
-(void)setImageData:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)maskedApplicationID;
-(NSString *)inReplyToStatusID;
-(void)setImageAssetURLs:(NSArray *)arg1 ;
-(void)setMaskedApplicationID:(NSString *)arg1 ;
-(void)setInReplyToStatusID:(NSString *)arg1 ;
-(void)loadAssetDataIfNecessaryWithMaxByteSize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end

