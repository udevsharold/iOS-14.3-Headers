/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
+(id)codedPropertyKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)serverRepresentation;
-(id)descriptionSubstitutionMap;
-(void)mergePropertiesFrom:(id)arg1 ;
@end
