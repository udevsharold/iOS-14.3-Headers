/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURLSession, NSString;

@interface DEInvalidateDelegate : NSObject <NSURLSessionDelegate> {

	NSURLSession* _urlSession;
	NSString* _distribution;

}

@property (nonatomic,retain) NSURLSession * urlSession;              //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSString * distribution;                //@synthesize distribution=_distribution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDistribution:(NSString *)arg1 ;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(NSURLSession *)urlSession;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(NSString *)distribution;
@end
