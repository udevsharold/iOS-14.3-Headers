/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSDictionary, IDSMessageContext;

@interface _SYDeferredIncomingSession : NSObject {

	NSURL* _resourceURL;
	NSString* _identifier;
	NSDictionary* _metadata;
	IDSMessageContext* _idsContext;

}

@property (nonatomic,copy) NSURL * resourceURL;                           //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) IDSMessageContext * idsContext;              //@synthesize idsContext=_idsContext - In the implementation block
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setResourceURL:(NSURL *)arg1 ;
-(NSURL *)resourceURL;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdsContext:(IDSMessageContext *)arg1 ;
-(IDSMessageContext *)idsContext;
@end

