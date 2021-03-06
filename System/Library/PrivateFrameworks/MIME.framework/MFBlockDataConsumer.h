/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDataConsumer.h>

@class NSString;

@interface MFBlockDataConsumer : NSObject <MFDataConsumer> {

	/*^block*/id _appendHandler;
	/*^block*/id _doneHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)done;
-(long long)appendData:(id)arg1 ;
-(id)initWithAppendHandler:(/*^block*/id)arg1 doneHandler:(/*^block*/id)arg2 ;
@end

