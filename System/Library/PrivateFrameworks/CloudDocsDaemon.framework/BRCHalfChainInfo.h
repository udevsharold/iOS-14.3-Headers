/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecord, BRFieldCKInfo;

@interface BRCHalfChainInfo : NSObject {

	CKRecord* _record;
	BRFieldCKInfo* _ckInfo;

}

@property (nonatomic,retain) CKRecord * record;                     //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) BRFieldCKInfo * ckInfo;              //@synthesize ckInfo=_ckInfo - In the implementation block
-(CKRecord *)record;
-(BRFieldCKInfo *)ckInfo;
-(void)setRecord:(CKRecord *)arg1 ;
-(id)initWithRecord:(id)arg1 ckInfo:(id)arg2 ;
@end
