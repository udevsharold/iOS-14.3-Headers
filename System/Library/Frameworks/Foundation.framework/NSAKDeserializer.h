/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSAKDeserializer : NSObject {

	id ds;

}
-(void)dealloc;
-(id)deserializeListItemIn:(id)arg1 at:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(id)deserializePListValueIn:(id)arg1 key:(id)arg2 length:(unsigned long long)arg3 ;
-(id)deserializeData:(id)arg1 ;
-(id)initForDeserializerStream:(id)arg1 ;
-(id)deserializePList:(id)arg1 ;
-(id)deserializeNewString;
-(id)deserializeNewObject;
-(id)deserializeList:(id)arg1 ;
-(id)deserializePListKeyIn:(id)arg1 ;
-(id)deserializeNewKeyString;
-(id)deserializeNewData;
-(id)deserializeNewList;
-(id)deserializeString:(id)arg1 ;
-(id)deserializerStream;
-(id)deserializeNewPList;
@end

