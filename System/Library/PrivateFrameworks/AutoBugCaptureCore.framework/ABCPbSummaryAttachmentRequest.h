/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ABCPbSummaryAttachmentRequest : PBRequest <NSCopying> {

	NSString* _fileName;
	unsigned _fileSize;
	SCD_Struct_AB4 _has;

}

@property (nonatomic,readonly) BOOL hasFileName; 
@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) BOOL hasFileSize; 
@property (assign,nonatomic) unsigned fileSize;                //@synthesize fileSize=_fileSize - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)hasFileName;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)fileSize;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFileSize:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasFileSize;
-(void)setHasFileSize:(BOOL)arg1 ;
@end

