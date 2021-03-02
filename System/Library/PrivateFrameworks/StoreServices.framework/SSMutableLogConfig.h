/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSLogConfig.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSMutableLogConfig : SSLogConfig <NSCopying>

@property (nonatomic,copy) NSString * category; 
@property (assign,nonatomic) unsigned long long environment; 
@property (nonatomic,copy) NSString * outputDirectory; 
@property (nonatomic,copy) NSString * outputFilename; 
@property (nonatomic,copy) NSString * subsystem; 
@property (assign,nonatomic) BOOL writeToDisk; 
@end
