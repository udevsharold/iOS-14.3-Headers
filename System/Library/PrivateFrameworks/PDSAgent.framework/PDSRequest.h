/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, PDSRequestInfo;

@interface PDSRequest : NSObject {

	NSSet* _entries;
	PDSRequestInfo* _requestInfo;

}

@property (nonatomic,readonly) NSSet * entries;                         //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) PDSRequestInfo * requestInfo;              //@synthesize requestInfo=_requestInfo - In the implementation block
-(NSSet *)entries;
-(unsigned long long)hash;
-(id)description;
-(PDSRequestInfo *)requestInfo;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRequestInfo:(PDSRequestInfo *)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithEntries:(id)arg1 requestInfo:(id)arg2 ;
@end
