/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSNumber;

@interface DEDCloudKitAttachment : NSObject {

	NSURL* _url;
	NSNumber* _fileSize;

}

@property (retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (retain) NSNumber * fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(NSNumber *)fileSize;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
@end
