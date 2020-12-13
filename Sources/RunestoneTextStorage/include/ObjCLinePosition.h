//
//  ObjCLinePosition.h
//  
//
//  Created by Simon Støvring on 09/12/2020.
//

@import Foundation;

@interface ObjCLinePosition: NSObject
@property (nonatomic, readonly) NSInteger lineNumber;
@property (nonatomic, readonly) NSInteger column;
- (nonnull instancetype)initWithLineNumber:(NSInteger)lineNumber column:(NSInteger)column;
@end
