/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSString, NSData;

@interface JXHTTPMultipartPart : NSObject {

	int _multipartType;
	NSString* _key;
	NSData* _preData;
	NSData* _contentData;
	NSData* _postData;

}

@property (assign,nonatomic) int multipartType;                 //@synthesize multipartType=_multipartType - In the implementation block
@property (nonatomic,retain) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSData * preData;                  //@synthesize preData=_preData - In the implementation block
@property (nonatomic,retain) NSData * contentData;              //@synthesize contentData=_contentData - In the implementation block
@property (nonatomic,retain) NSData * postData;                 //@synthesize postData=_postData - In the implementation block
+(id)withMultipartType:(int)arg1 key:(id)arg2 data:(id)arg3 contentType:(id)arg4 fileName:(id)arg5 boundary:(id)arg6 ;
-(NSData *)postData;
-(long long)dataLength;
-(long long)contentLength;
-(void)setPostData:(NSData *)arg1 ;
-(id)filePath;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSData *)preData;
-(NSData *)contentData;
-(void)setContentData:(NSData *)arg1 ;
-(unsigned long long)loadMutableData:(id)arg1 withDataInRange:(NSRange)arg2 ;
-(int)multipartType;
-(void)setMultipartType:(int)arg1 ;
-(void)setPreData:(NSData *)arg1 ;
@end

