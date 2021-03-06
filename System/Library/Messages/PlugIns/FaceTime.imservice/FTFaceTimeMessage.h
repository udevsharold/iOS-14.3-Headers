/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface FTFaceTimeMessage : FTIDSMessage <NSCopying> {

	NSData* _sessionToken;

}

@property (copy) NSData * sessionToken;              //@synthesize sessionToken=_sessionToken - In the implementation block
-(id)init;
-(void)setSessionToken:(NSData *)arg1 ;
-(NSData *)sessionToken;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)requiredKeys;
-(id)messageBody;
-(BOOL)isValidMessage;
-(BOOL)hasRequiredKeys:(id*)arg1 ;
@end

