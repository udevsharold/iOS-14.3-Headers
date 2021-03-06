/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBOpenPunchoutCommand.h>
@class _SFPBPunchout, NSData;


@protocol _SFPBOpenPunchoutCommand <NSObject>
@property (nonatomic,retain) _SFPBPunchout * punchout; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setPunchout:(id)arg1;
-(_SFPBPunchout *)punchout;
-(id)initWithDictionary:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBPunchout, NSData, NSString;

@interface _SFPBOpenPunchoutCommand : PBCodable <_SFPBOpenPunchoutCommand, NSSecureCoding> {

	_SFPBPunchout* _punchout;

}

@property (nonatomic,retain) _SFPBPunchout * punchout;              //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPunchout:(_SFPBPunchout *)arg1 ;
-(_SFPBPunchout *)punchout;
-(id)initWithDictionary:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
@end

