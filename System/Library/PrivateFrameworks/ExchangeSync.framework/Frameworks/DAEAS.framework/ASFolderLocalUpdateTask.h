/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSString, ASFolder;

@interface ASFolderLocalUpdateTask : ASTask {

	NSString* _previousSyncKey;
	ASFolder* _folder;
	int _commandCode;
	int _requestType;
	/*^block*/id _completionBlock;
	long long _dataclasses;

}

@property (assign,nonatomic) long long dataclasses;              //@synthesize dataclasses=_dataclasses - In the implementation block
+(id)taskWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setDataclasses:(long long)arg1 ;
-(id)requestBody;
-(void)finishWithError:(id)arg1 ;
-(long long)dataclasses;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)initWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_appendRequestBodyFolderDataToWBXMLData:(id)arg1 ;
@end

