/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ECMimePart <NSObject>
@property (nonatomic,copy,readonly) NSString * mimeSubtype; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,readonly) unsigned long long totalTextSize; 
@required
-(NSString *)mimeType;
-(unsigned long long)totalTextSize;
-(NSString *)mimeSubtype;

@end

