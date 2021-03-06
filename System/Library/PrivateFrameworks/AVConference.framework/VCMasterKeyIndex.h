/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMasterKeyIndex : NSObject <NSCopying> {

	unsigned char _MKI[16];
	unsigned _activeSize;
	BOOL _isMapped;
	unsigned char _mapKey;

}

@property (readonly) unsigned activeSize; 
@property (readonly) BOOL isMapped; 
@property (readonly) unsigned char mapKey; 
+(id)newMKIWithBytes:(char*)arg1 bufferSize:(unsigned)arg2 ;
+(id)makeInvalidKey;
-(const char*)MKI;
-(id)initWithUUID:(unsigned char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithNSUUID:(id)arg1 ;
-(void)dealloc;
-(unsigned char)mapKey;
-(unsigned long long)hash;
-(BOOL)isValid;
-(id)description;
-(BOOL)isMapped;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)setMapping:(unsigned char)arg1 ;
-(void)setMapKey:(unsigned char)arg1 ;
-(id)initWithBytes:(char*)arg1 bufferSize:(unsigned)arg2 ;
-(unsigned)activeSize;
-(void)setActiveSize:(unsigned)arg1 ;
-(void)fullKeyBytes:(unsigned char)arg1 ;
-(unsigned)mappedKeySize;
-(unsigned)mappedKeyBytes:(char*)arg1 size:(unsigned)arg2 ;
@end

