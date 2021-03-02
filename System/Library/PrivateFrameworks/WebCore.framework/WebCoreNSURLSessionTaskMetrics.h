/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class NSArray;

@interface WebCoreNSURLSessionTaskMetrics : NSObject {

	RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics>* _transactionMetrics;

}

@property (copy,readonly) NSArray * transactionMetrics; 
-(id)_initWithMetrics:(const NetworkLoadMetrics*)arg1 ;
-(NSArray *)transactionMetrics;
@end
