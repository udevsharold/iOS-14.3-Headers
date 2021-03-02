/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class VOSScreenreaderMode, NSMutableSet;

@interface _VOSProfileMode : NSObject <NSSecureCoding> {

	VOSScreenreaderMode* _mode;
	NSMutableSet* _commands;

}

@property (nonatomic,retain) VOSScreenreaderMode * mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSMutableSet * commands;                 //@synthesize commands=_commands - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)profileModeWitMode:(id)arg1 ;
+(id)profileModeWithStringValue:(id)arg1 ;
-(void)setMode:(VOSScreenreaderMode *)arg1 ;
-(void)addCommand:(id)arg1 ;
-(VOSScreenreaderMode *)mode;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setCommands:(NSMutableSet *)arg1 ;
-(NSMutableSet *)commands;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithMode:(id)arg1 commands:(id)arg2 ;
@end
