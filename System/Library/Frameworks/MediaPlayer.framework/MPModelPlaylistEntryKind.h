/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class NSArray;

@interface MPModelPlaylistEntryKind : MPModelKind {

	NSArray* _kinds;

}

@property (nonatomic,readonly) NSArray * kinds;              //@synthesize kinds=_kinds - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)kindWithKinds:(id)arg1 ;
+(id)identityKind;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)kinds;
-(BOOL)isEqual:(id)arg1 ;
-(id)humanDescription;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

