/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetResourceLoadingRequestorInternal;

@interface AVAssetResourceLoadingRequestor : NSObject {

	AVAssetResourceLoadingRequestorInternal* _requestor;

}

@property (nonatomic,readonly) BOOL providesExpiredSessionReports; 
-(void)dealloc;
-(id)initWithRequestInfo:(CFDictionaryRef)arg1 ;
-(BOOL)providesExpiredSessionReports;
@end

