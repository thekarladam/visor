/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface TTWorkspace : NSObject <NSCoding, NSCopying>
{
    NSMutableArray *_windowControllers;
    NSString *_name;
}

+ (id)propertyListForWindowAtPoint:(struct CGPoint)arg1 withProfile:(id)arg2;
+ (id)propertyListRepresentationWithName:(id)arg1 windowRepresentations:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)addWindowController:(id)arg1;
- (void)removeWindowController:(id)arg1;
- (void)addWorkspace:(id)arg1;
- (id)windowControllers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)showWindows;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListForWindowController:(id)arg1;
- (id)windowControllerForPropertyList:(id)arg1;

@end
