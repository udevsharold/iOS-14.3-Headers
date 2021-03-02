/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCommand.h>
#import <libobjc.A.dylib/SFOpenPunchoutCommand.h>
@class SFPunchout, NSDictionary, NSData;


@protocol SFOpenPunchoutCommand <SFCommand>
@property (nonatomic,retain) SFPunchout * punchout; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;
-(void)setPunchout:(id)arg1;
-(SFPunchout *)punchout;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFPunchout, NSDictionary, NSData, NSString;

@interface SFOpenPunchoutCommand : SFCommand <SFOpenPunchoutCommand, NSSecureCoding, NSCopying> {

	SFPunchout* _punchout;

}

@property (nonatomic,retain) SFPunchout * punchout;                                  //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSData *)jsonData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(SFPunchout *)punchout;
-(void)encodeWithCoder:(id)arg1 ;
@end
