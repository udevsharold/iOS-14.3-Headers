/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SMBSearch/SMBSearch-Structs.h>
@interface cdbProp : NSObject {

	network_uuid colidGuid;
	unsigned _dbPropId;
	unsigned _dbPropOptions;
	unsigned _dbPropStatus;
	unsigned _colidEKind;
	unsigned _colidULID;

}

@property (assign) unsigned dbPropId;                   //@synthesize dbPropId=_dbPropId - In the implementation block
@property (assign) unsigned dbPropOptions;              //@synthesize dbPropOptions=_dbPropOptions - In the implementation block
@property (assign) unsigned dbPropStatus;               //@synthesize dbPropStatus=_dbPropStatus - In the implementation block
@property (assign) unsigned colidEKind;                 //@synthesize colidEKind=_colidEKind - In the implementation block
@property (assign) unsigned colidULID;                  //@synthesize colidULID=_colidULID - In the implementation block
-(unsigned)dbPropId;
-(id)initWithPropID:(unsigned)arg1 ;
-(void)setTimeMidGuid;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(void)setDbPropId:(unsigned)arg1 ;
-(unsigned)dbPropOptions;
-(void)setDbPropOptions:(unsigned)arg1 ;
-(unsigned)dbPropStatus;
-(void)setDbPropStatus:(unsigned)arg1 ;
-(unsigned)colidEKind;
-(void)setColidEKind:(unsigned)arg1 ;
-(unsigned)colidULID;
-(void)setColidULID:(unsigned)arg1 ;
@end

