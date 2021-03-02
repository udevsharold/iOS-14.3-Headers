/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSURL, NSError;

@interface SKDownloadChangeset : NSObject <NSCopying> {

	NSNumber* _contentLength;
	NSURL* _contentURL;
	NSNumber* _downloadID;
	NSNumber* _downloadState;
	NSError* _error;
	NSNumber* _progress;
	NSNumber* _timeRemaining;

}

@property (nonatomic,copy) NSNumber * contentLength;              //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,copy) NSURL * contentURL;                    //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSNumber * downloadID;                 //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSNumber * downloadState;              //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,copy) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSNumber * progress;                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSNumber * timeRemaining;              //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(id)changesetWithDownloadID:(id)arg1 state:(long long)arg2 ;
-(id)copyXPCEncoding;
-(NSNumber *)contentLength;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSError *)error;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)contentURL;
-(void)setDownloadState:(NSNumber *)arg1 ;
-(void)setTimeRemaining:(NSNumber *)arg1 ;
-(NSNumber *)timeRemaining;
-(void)setContentLength:(NSNumber *)arg1 ;
-(void)setProgress:(NSNumber *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSNumber *)progress;
-(void)setDownloadID:(NSNumber *)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSNumber *)downloadState;
-(NSNumber *)downloadID;
@end
