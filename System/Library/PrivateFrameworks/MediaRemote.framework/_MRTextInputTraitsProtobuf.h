/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR24* _pINEntrySeparatorIndexes;
	unsigned long long _validTextRangeLength;
	unsigned long long _validTextRangeLocation;
	int _autocapitalizationType;
	int _keyboardType;
	int _returnKeyType;
	BOOL _autocorrection;
	BOOL _enablesReturnKeyAutomatically;
	BOOL _secureTextEntry;
	BOOL _spellchecking;
	SCD_Struct_MR25 _has;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
@end
