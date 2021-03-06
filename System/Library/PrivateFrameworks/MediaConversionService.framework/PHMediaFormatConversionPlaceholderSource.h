/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaConversionService/MediaConversionService-Structs.h>
#import <MediaConversionService/PHMediaFormatConversionSource.h>

@class NSString;

@interface PHMediaFormatConversionPlaceholderSource : PHMediaFormatConversionSource {

	NSString* _fileType;

}

@property (nonatomic,copy) NSString * fileType;              //@synthesize fileType=_fileType - In the implementation block
+(id)imageSourceForFileType:(id)arg1 ;
+(id)videoSourceForFileType:(id)arg1 ;
-(unsigned long long)length;
-(id)fileURL;
-(NSString *)fileType;
-(CGSize)imageDimensions;
-(void)setFileType:(NSString *)arg1 ;
-(id)initWithFileType:(id)arg1 mediaType:(long long)arg2 ;
@end

