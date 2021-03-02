/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData, NSString, _BlastDoorLPVideoProperties;

@interface _BlastDoorLPVideo : NSObject <NSSecureCoding> {

	BOOL _hasAudio;
	NSURL* _streamingURL;
	NSURL* _youTubeURL;
	NSData* _data;
	NSString* _MIMEType;
	NSURL* _fileURL;
	_BlastDoorLPVideoProperties* _properties;

}

@property (nonatomic,retain) NSURL * streamingURL;                                //@synthesize streamingURL=_streamingURL - In the implementation block
@property (nonatomic,retain) NSURL * youTubeURL;                                  //@synthesize youTubeURL=_youTubeURL - In the implementation block
@property (nonatomic,copy) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * MIMEType;                                   //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                     //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) BOOL hasAudio;                                       //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,copy) _BlastDoorLPVideoProperties * properties;              //@synthesize properties=_properties - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)init;
-(NSData *)data;
-(id)_initWithVideo:(id)arg1 ;
-(void)setMIMEType:(NSString *)arg1 ;
-(void)setProperties:(_BlastDoorLPVideoProperties *)arg1 ;
-(NSString *)MIMEType;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(_BlastDoorLPVideoProperties *)properties;
-(void)setData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAudio;
-(void)setHasAudio:(BOOL)arg1 ;
-(NSURL *)streamingURL;
-(BOOL)_shouldEncodeData;
-(unsigned long long)_encodedSize;
-(NSURL *)youTubeURL;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStreamingURL:(NSURL *)arg1 ;
-(void)setYouTubeURL:(NSURL *)arg1 ;
@end
