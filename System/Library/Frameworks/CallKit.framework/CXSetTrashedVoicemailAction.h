/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXVoicemailAction.h>

@interface CXSetTrashedVoicemailAction : CXVoicemailAction {

	BOOL _trashed;

}

@property (assign,getter=isTrashed,nonatomic) BOOL trashed;              //@synthesize trashed=_trashed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(void)setTrashed:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTrashed;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)initWithVoicemailUUID:(id)arg1 trashed:(BOOL)arg2 ;
@end

