/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <TSUtility/TSUtility-Structs.h>
@class NSObject, NSDateFormatter;

@interface TSUStdioLogSink : NSObject {

	NSObject*<OS_dispatch_queue> _logQueue;
	NSDateFormatter* _dateFormatter;

}
+(id)sharedInstance;
-(id)init;
-(/*^block*/id)logSinkBlockWithFilePointer:(_sFILE*)arg1 ;
@end
